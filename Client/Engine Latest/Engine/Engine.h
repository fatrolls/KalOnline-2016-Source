#ifndef __ENGINE_H
#define __ENGINE_H

#include <Windows.h>

namespace Engine
{
	struct Packet
	{
		unsigned short Size;
		unsigned char Type;
		char Data[8000];
	};

	namespace CEditor
	{
		static void (__thiscall *Clear)(void* _this) = (void (__thiscall*)(void*))0x006AD600;
		static void (__thiscall *Load)(void* _this, const char* Text) = (void (__thiscall*)(void*, const char*))0x006AE700;
	}

	namespace KGameSys
	{
		static int (__cdecl *RidingEnable)(int ID, int Type) = (int (__cdecl*)(int,int))0x006015E0;
		static int (__cdecl *RidingDisable)(int ID, int Type) = (int (__cdecl*)(int,int))0x00601750;
		static int (__cdecl *ShowPet)(int Value, int Argument, char Packet) = (int (__cdecl*)(int,int,char))0x005F6080;
		static int (__cdecl *AddMsg)(int a1, const char *a2) = (int (__cdecl*)(int,const char*))0x004213E0;
		static int (__cdecl *ArmorGrade)(int a1) = (int (__cdecl*)(int))0x004A7870;
		static void *(__thiscall *ItemMsg)(void *a, const char *a1) = (void *(__thiscall*)(void*,const char*))0x006252A0;
		static int (__cdecl *RebirthTalisman)(int Argument, int Value, char Data) = (int (__cdecl*)(int,int,char))0x005EDAE0;
		static int (__cdecl *Scenario3_3)(unsigned int Value, int Data) = (int (__cdecl*)(unsigned int,int))0x006521D0;
		static int (__thiscall *LatestScreenMsg)(void *Argument, const char *a2) = (int (__thiscall*)(void*,const char*))0x005B1FB0;
		static int (__thiscall *HellTime)(int Argument, int Value) = (int (__thiscall*)(int,int))0x005E45D0;
		static char (__cdecl *SetHellTime)(int Time, char Value) = (char (__cdecl*)(int,char))0x0060C260;
		static DWORD (__thiscall *RefreshHellTime)(int Window) = (DWORD (__thiscall*)(int))0x0060C220;
		static char (__thiscall *ScreenOverlay)(int a, int a2, int a3, int a4, char a5) = (char (__thiscall*)(int,int,int,int,char))0x00426F80;
		static int (__cdecl *MBox)(int pText, int nType, int nAction, int nDest, int nDest2) = (int (__cdecl*)(int, int, int, int, int))0x0063EA50;
		static int (__thiscall *OnCancel)(void *Argument) = (int (__thiscall*)(void*))0x00564040;
		static int (__thiscall *OnOk)(void *Argument) = (int (__thiscall*)(void*))0x005645B0;
		static unsigned long *m_pChattingControl = (unsigned long*)0x0091DBBC;
		static void (__cdecl *SetScreenInfo)(char Type, int Message) = (void (__cdecl*)(char, int))0x0064F750;
		static void (__cdecl *AddChattingMessage)(char Type, const char* Message, int Color) = (void (__cdecl*)(char, const char*, int))0x00647630;
		static void (__cdecl *AddInfoMessage)(const char* Message, int Color, int type) = (void (__cdecl*)(const char*, int, int))0x00647660;
		static int (__cdecl *OpenWindow)(const char *name, int Argument, int Value, int Type, int nForce, int x) = (int (__cdecl*)(const char*,int,int,int,int,int))0x0063C1D0;
		static int (__cdecl *OtherOpenWindow)(const char *name, int Argument, int Value, int Type, int nForce) = (int (__cdecl*)(const char*,int,int,int,int))0x0063E660;
		static int (__cdecl *CloseWindow)(char *name) = (int (__cdecl*)(char*))0x0063E470;
		static int (__cdecl *WindowCheck)(const char *name) = (int (__cdecl*)(const char*))0x0063E520;
		static int (__thiscall *SetBuff)(void *a, int a2, int a3, signed __int64 a4, char a5, int a6, int a7, int a8, int a9, int a10) = (int (__thiscall*)(void*,int,int,signed __int64,char,int,int,int,int,int))0x006CFB00;
		static int (__thiscall *SetIcon)(void *a, int Key, int Time, int a4, int nMsg) = (int (__thiscall*)(void*,int,int,int,int))0x006DAD50;
		static int (__thiscall *RemoveIcon)(void *a, int Key, int nMsg) = (int (__thiscall*)(void*,int,int))0x006DAAC0;
		static int (__cdecl *CallBuff)(int a1, int a2, signed __int64 a3, char a4, int a5, int a6, int a7, int a8, int a9) = (int (__cdecl*)(int,int,signed __int64,char,int,int,int,int,int))0x006454F0;
		static int (__thiscall *ShowBuffIcon)(int a, RECT *lprc) = (int (__thiscall*)(int,RECT*))0x00410F10;
		static int (__thiscall *MakeTip)(void *a, int a2, int a3, signed int a4, char a5, int a6, int a7) = (int (__thiscall*)(void*,int,int,signed int,char,int,int))0x004983C0;
		static int (__cdecl *FindItemFromIID)(int a2) = (int (__cdecl*)(int))0x00617350;
		static int (__cdecl *FindItemFromIIDEx)(int a2) = (int (__cdecl*)(int))0x006173B0;
		static signed int (__cdecl *PressKey)(int a1) = (signed int (__cdecl*)(int))0x00646F70;
		static int PressedKey = (int)0x0091DC48;
		static int (__cdecl *Check)() = (int (__cdecl*)())0x006ABE90;
		static int (__thiscall *CheckForDss)(int Item) = (int (__thiscall*)(int))0x00545B70;
		static int (__thiscall *CheckDssType)(void *Item, int Packet) = (int (__thiscall*)(void*,int))0x00546340;
		static int (__thiscall *DssConfirmButton)(void *Item, const char *Word, int Value) = (int (__thiscall*)(void*,const char*,int))0x00546750;
		static int (__cdecl *KMsgGet)(int SysMsgIndex) = (int (__cdecl*)(int))0x0048A840;
		static int (__thiscall *SetChangedText)(int Item, int TextName, int NewMsg) = (int (__thiscall*)(int,int,int))0x006C13B0;
		static int (__thiscall *SetDssWindow)(void *Window, int Packet) = (int (__thiscall*)(void*,int))0x00546900;
		static int (__thiscall *SetQigoong)(int Window, int Packet) = (int (__thiscall*)(int,int))0x005475B0;
		static void (__cdecl *DemonGongStone)(int Value, int Argument, int Packet) = (void (__cdecl*)(int,int,int))0x005F7A90;
		static int (__thiscall *SetDemonGongWindow)(void *Window, int Packet) = (int (__thiscall*)(void*,int))0x0055FEA0;
		static void (__thiscall *SendIdle)(int Object) = (void (__thiscall*)(int))0x004034B0;
	}
	
	namespace KWindowCollector
	{
		static void (__cdecl *ProcessDestroy)() = (void (__cdecl*)())0x0063E700;
	}

	namespace CD3DApplication
	{
		static HRESULT (__thiscall *Render3DEnvironment)(void* _this) = (HRESULT (__thiscall*)(void*))0x0045D740;
	}
	
	namespace KCommand
	{
		static int *m_bShowFrame = (int*)0x0091F9FC;
		static int *m_bHideUI = (int*)0x0091FA00;
		static int *m_bHideMe = (int*)0x0091FA04;
		static int *m_bHideTerrain = (int*)0x0091FA08;
		static int *m_bHideModel = (int*)0x0091FA0C;
		static int *m_bHideFog = (int*)0x0091FA10;
		static int *m_fFogEnd = (int*)0x0091FA24;
		static int *m_bHideWater = (int*)0x0091FA2C;
		static bool (__cdecl *ProcessCommand)(const char* Text) = (bool (__cdecl*)(const char*))0x0065BF00;
	}
	
	namespace KSunLight
	{
		static unsigned long *m_dwTime = (unsigned long*)0x0081F060;
	}
	
	namespace KSocket
	{
		static int *g_lpClient = (int*)0x009169B4;
		static int (__thiscall *SendPacket)(void* _this, const char* Buffer, int Length) = (int (__thiscall*)(void*, const char*, int))0x005E6C20;
		static int (__cdecl *OnRecv)(Packet *Data) = (int (__cdecl*)(Packet*))0x005CCD00;
		static float *m_fWriteTime = (float*)0x009169BC;
	}
	
	namespace CGame_Character
	{
		static unsigned long *m_Master = (unsigned long*)0x00845904;
		static unsigned long (__cdecl *FindCharacter)(unsigned int nID, int) = (unsigned long (__cdecl*)(unsigned int, int))0x0040C8D0;
	}
	
	namespace KBattle_UI
	{
		static void (__thiscall *DrawOnCharacter)(void *_this, unsigned char Type, int Number, int CharacterID) = (void (__thiscall*)(void*, unsigned char, int, int))0x006E5910;
	}
	
	namespace CGameMonster
	{
		static signed int (__thiscall *OnChangeGState)(int a) = (signed int (__thiscall*)(int))0x00433CB0;
		static char (__thiscall *ModelSkill)(int a, char a2, int a3, unsigned __int8 a4, unsigned __int16 a5, unsigned __int16 a6, char a7, char a8) = (char (__thiscall*)(int, char, int, unsigned __int8, unsigned __int16, unsigned __int16, char, char))0x00433610;
	}
	
	namespace CFxEntityManager
	{
		static signed int (__thiscall *AddFxToTarget)(void *player, const char* name, int targetID, char autoRemove, char continued, signed int nForced, int nTargetType) = (signed int (__thiscall*)(void*, const char*, int, char, char, signed int, int))0x00717DC0;
	}

	namespace Honor
	{
		static int *Range = (int*)0x0091DD74;
		static int *PrevRange = (int*)0x0091DD80;
		static int *Point = (int*)0x0091DD6C;
		static int *Kill = (int*)0x0091DD84;
		static int *Die = (int*)0x0091DD88;
		static int *DKPWin = (int*)0x0091DD90;
		static int *DKPFull = (int*)0x0091DD8C;
		static int *PLWin = (int*)0x0091DD98;
		static int *PLFull = (int*)0x0091DD94;
		static int *SVWin = (int*)0x0091DDA0;
		static int *SVFull = (int*)0x0091DD9C;
		static int *Reward = (int*)0x0091DD70;
	}

	static float *g_fCurrentTime = (float*)0x0093E338;
	static void *AddFx = (void*)0x0093CD68;
}

#endif