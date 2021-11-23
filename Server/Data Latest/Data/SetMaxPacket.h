void __cdecl QuestFix(int DB, const char *Statement, int PID, int QuestID, int Flag, int Clear)
{
	Execute((void*)DB,"INSERT INTO Quest VALUES (%d, %d, %d, %d, %d, %d, %d)",PID,QuestID,Flag,Clear,0,0,0);
}

void SetMaxPacket()
{
	Interface<IMemory> Memory;
	int NewPacket = 93;
	Memory->Copy((void*)0x00410DD5, &NewPacket, 1);
	Memory->Hook(0x00414646, QuestFix, 0xe8, 5);
}