#include <windows.h>
#include "Protect.h"
#include "Interface.h"
#include "Tools.h"

CREATE_INTERFACE(IProtect)

std::string Crypt(std::string Key)
{
    std::string output = Key;
    
    for (int i = 0; i < (int)Key.size(); i++)
        output[i] = Key[i] ^ 250;
    
	return output;
}

static int (__cdecl *Connection)(int Type, const char *Text,...) = (int (__cdecl*)(int,const char*,...))0x004672A0;
static int (__cdecl *GetHistory)(int Value) = (int (__cdecl*)(int))0x00614890;

int __cdecl ConnectionFix(int Type, const char *Text, int Value, int Object, int Argument)
{
	return Connection(Type,"bd",Value,Object);
}

int __cdecl MyGetHistory(int Value)
{
	int TotalSize = 0, Size = 0;
	if (*(DWORD*)0x0091DCEC) TotalSize = (*(DWORD*)0x0091DCF0 - *(DWORD*)0x0091DCEC) >> 2;
	if (TotalSize == 0) return 0;
	if (*(DWORD*)0x00834E6C == -1) *(DWORD*)0x00834E6C = TotalSize - 1;
	Size = *(DWORD*)0x00834E6C;
	*(DWORD*)0x00834E6C -= 1;
	return *(DWORD*)(*(DWORD*)0x0091DCEC + 4 * Size);
}

DWORD __stdcall FixGetFileAttributesA(LPCSTR lpFileName)
{
	return 0;
}

bool IProtect::Disable()
{
	Interface<ITools> Tools;
	Tools->Intercept(ITools::_I_CALL, (void*)0x0064F2F1, (void*)MyGetHistory, 5);
	Tools->Intercept(ITools::_I_CALL, (void*)0x005DDFE0, ConnectionFix, 5);
	Tools->Intercept(ITools::_I_CALL, (void*)0x0071AF53, (void*)FixGetFileAttributesA, 6);
	Tools->FillMemoryEx(0x005CCD2A, ITools::_I_NOP, 1);
	Tools->FillMemoryEx(0x005CCD31, ITools::_I_NOP, 1);
	Tools->FillMemoryEx(0x005CCD39, ITools::_I_NOP, 6);
	Tools->FillMemoryEx(0x004667D1, ITools::_I_JMP_SHORT, 1);
	Tools->FillMemoryEx(0x004667F8, ITools::_I_JMP_SHORT, 1);
	Tools->SetMemoryEx(0x007D8EB8, "sbbbbbbbb", 10);
	Tools->SetMemoryEx(0x007DD3E8, "bbddww", 7);
	Tools->FillMemoryEx(0x005DF907, ITools::_I_JMP_SHORT, 1);
	Tools->SetMemoryEx(0x007D60B4, Crypt("EV)O8@BL$3O2E").c_str(), 13);

	float ZoomLimit = 300.0; int FLLimit = 250;
	Tools->MemcpyExD((void*)0x00722753, &ZoomLimit, 4);
	Tools->MemcpyExD((void*)0x005840CF, &FLLimit, 1);
	Tools->FillMemoryEx(0x005DE01C, ITools::_I_NOP, 5);
	Tools->FillMemoryEx(0x005DE021, ITools::_I_NOP, 5);
	Tools->FillMemoryEx(0x0060166D, ITools::_I_NOP, 5);
	return true;
}