int __fastcall CBuffPrtyExFreeBuff(int Buff, void *edx, int Player)
{
	IChar IPlayer((void*)Player);
	
	if (IPlayer.IsOnline())
	{
		if (*(DWORD*)(Buff + 4) == 118 && *(DWORD*)(Buff + 28) == 2 && *(DWORD*)(Buff + 12) == -50)
			return (*(int (__cdecl **)(DWORD, DWORD, DWORD, DWORD))(*(DWORD*)Player + 96))(Player, 32, 0, -50);

		return CBuffPrtyEx::FreeBuff(Buff,Player);
	}

	return 0;
}

int __cdecl CreateBuff(int BuffID, __int32 Time, int Stat, int Object)
{
	if (BuffID == 29 && Object < 0 && Stat < 0)
	{
		Object *= -1;
		Stat *= -1;
	}

	if (BuffID >= 119 && BuffID <= 155)
	{
		int SetTime = 0;

		if (!Stat)
			SetTime = Time + time(0);

		void *Check = CBuff::CheckBuffCreate(0x20u);

		if (Check)
			return (int)CBuff::CBuffExpire(Check, BuffID, SetTime, 0, 0, 0, 32);
		else
			return 0;
	} else if (BuffID >= 156 && BuffID <= 255)
	{
		void *Check = CBuff::CheckBuffCreate(0x28u);

		if (Check)
			return CBuff::CBuffRemainPrty(Check, BuffID, Time, 0, 0, 0, 0);
		else
			return 0;
	} else if (BuffID >= 256)
	{
		void *Check = CBuff::CheckBuffCreate(0x2Cu);

		if (Check)
			return CBuff::CBuffPrtyEx(Check, BuffID, Time * 1000, 0, 0, 0, 0, 0, 0, 0);
		else
			return 0;
	} else {
		return CBuff::CreateBuff(BuffID,Time,Stat,Object);
	}
}