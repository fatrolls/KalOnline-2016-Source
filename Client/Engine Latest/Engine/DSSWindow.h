static int (__thiscall *KalItemShop1)(void *a, const char *a2, int a3) = (int (__thiscall*)(void*,const char*,int))0x00553F60;
static int (__thiscall *KalItemShop2)(void *a, const char *a2, int a3) = (int (__thiscall*)(void*,const char*,int))0x00554070;
static int (__thiscall *KalItemShop3)(void *a, const char *a2, int a3) = (int (__thiscall*)(void*,const char*,int))0x00556720;
static int (__stdcall *KalShop)(char a1) = (int (__stdcall*)(char))0x00556670;
static int (__cdecl *ShopKal)() = (int (__cdecl*)())0x00553610;

int __fastcall MyKalItemShop1(void *a, void *edx, const char *a2, int a3)
{
	if (_stricmp(a2, "cancel") && _stricmp(a2, "close"))
	{
		if (!_stricmp(a2, "ok"))
		{
			if (*((DWORD*)a + 111))
			{
				if (!*((BYTE*)a + 452))
				{
					*((BYTE*)a + 452) = 1;
					KalShop(0);
					Interface<IPackets> Packets;
					Packets->Send(183, "bbdw", 4, *(BYTE*)(ShopKal() + 4), *((DWORD*)a + 112), *((DWORD*)a + 110));
				}
			}
			
			return (*(int (__thiscall **)(void *))(*(DWORD *)a + 228))(a);
		}
	}

	return KalItemShop1(a,a2,a3);
}

int __fastcall MyKalItemShop2(void *a, void *edx, const char *a2, int a3)
{
	if (_stricmp(a2, "cancel") && _stricmp(a2, "close"))
	{
		if (!_stricmp(a2, "ok"))
		{
			if (*((DWORD*)a + 111))
			{
				if (!*((BYTE*)a + 452))
				{
					*((BYTE*)a + 452) = 1;
					KalShop(0);
					Interface<IPackets> Packets;
					Packets->Send(183, "bbdw", 4, *(BYTE*)(ShopKal() + 4), *((DWORD*)a + 112), *((DWORD*)a + 110));
				}
			}
			
			return (*(int (__thiscall **)(void *))(*(DWORD *)a + 228))(a);
		}
	}

	return KalItemShop2(a,a2,a3);
}

int __fastcall MyKalItemShop3(void *a, void *edx, const char *a2, int a3)
{
	if (_stricmp(a2, "cancel") && _stricmp(a2, "close"))
	{
		if (!_stricmp(a2, "ok"))
		{
			if (*((DWORD*)a + 111) && !*((BYTE*)a + 480))
			{
				*((BYTE*)a + 480) = 1;
				KalShop(0);
				Interface<IPackets> Packets;
				if (*((DWORD*)a + 119) < 16u)
					Packets->Send(183, "bbdws", 2, *(BYTE*)(ShopKal() + 4), *((DWORD*)a + 112), *((DWORD*)a + 110), (int)((char*)a + 456));
				else
					Packets->Send(183, "bbdws", 2, *(BYTE*)(ShopKal() + 4), *((DWORD*)a + 112), *((DWORD*)a + 110), *((DWORD*)a + 114));
			}
			
			return (*(int (__thiscall **)(void *))(*(DWORD *)a + 228))(a);
		}
	}

	return KalItemShop3(a,a2,a3);
}

void __fastcall CheckForDss(int Item, void *edx)
{
	Interface<IPackets> Packets;

	if (Packets->DssUpdateCheck == true && *(DWORD*)(Item + 808) == 0 && *(DWORD*)(Item + 816) == 0)
	{
		*(DWORD*)(*(DWORD*)(Item + 800) + 184) = 1;
		(*(void (__thiscall **)(void *))(*(DWORD *)Item + 256))((void*)Item);
		*(DWORD*)(Item + 816) = 1;
		*(DWORD*)(Item + 808) = GetTickCount();
		int Msg = Engine::KGameSys::KMsgGet(3574);
		Engine::KGameSys::SetChangedText(Item, (int)"convers_title", Msg);
		*(float*)(Item + 812) = 3000.0;
	}

	Engine::KGameSys::CheckForDss(Item);
	Packets->DssUpdateCheck = false;

	if (*(DWORD*)(Item + 808) == 0 && *(DWORD*)(Item + 816) == 0)
	{
		*(DWORD*)(*(DWORD*)(Item + 800) + 184) = 0;
		Engine::KGameSys::SetChangedText(Item, (int)"convers_title", (int)" ");
		Engine::KGameSys::SetChangedText(Item, (int)"convers_per", (int)" ");
	}
}