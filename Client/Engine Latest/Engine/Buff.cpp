#include "Interface.h"
#include "Tools.h"
#include "Engine.h"
#include "Hooks.h"
#include "Buff.h"

int __fastcall SetBuff(void *a, void *edx, int a2, int a3, signed __int64 a4, char a5, int a6, int a7, int a8, int a9, int a10)
{
	if ( a8 == 5000 )
	{
		Engine::KGameSys::SetIcon(a,a9,a7,a6,a10);
		return Engine::KGameSys::ShowBuffIcon((int)a, (RECT *)((int)a + 20));
	} else if ( a8 == 6000 )
	{
		Engine::KGameSys::RemoveIcon(a,a9,a10);
		return Engine::KGameSys::ShowBuffIcon((int)a, (RECT *)((int)a + 20));
	} else {
		return Engine::KGameSys::SetBuff(a,a2,a3,a4,a5,a6,a7,a8,a9,a10);
	}
}

void IBuff::HookBuff()
{
	Interface<ITools> Tools;
	Tools->Intercept(ITools::_I_CALL, (void*)0x0064552A, SetBuff, 5);
}