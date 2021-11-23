int __fastcall SkillUpgradeCheck(void *Player,int SkillID, int PointerCheck)
{
	IChar IPlayer(Player); int SkillPointer = 0;

	if (IPlayer.IsOnline())
	{
		if (IPlayer.GetClass() == 3)
		{
			if (IPlayer.GetLevel() >= 19 && SkillID == 4 && !PointerCheck)
			{
				IPlayer.IncreaseCritRate(1);
				IPlayer.IncreaseCritDamage(1);
				return 1;
			}

			if (IPlayer.GetLevel() >= 24 && SkillID == 5 && !PointerCheck)
			{
				IPlayer.IncreaseCritRate(1);
				IPlayer.IncreaseCritDamage(1);
				return 1;
			}

			if (IPlayer.GetLevel() >= 19 && SkillID == 7 && !PointerCheck)
				return 1;

			if (IPlayer.GetSpecialty() >= 3 && IPlayer.GetLevel() >= 30 && SkillID == 8 && !PointerCheck)
				return 1;

			if (IPlayer.GetSpecialty() >= 3 && IPlayer.GetLevel() >= 30 && SkillID == 9 && !PointerCheck)
				return 1;

			if (IPlayer.GetSpecialty() >= 3 && IPlayer.GetLevel() >= 35 && SkillID == 10 && !PointerCheck)
				return 1;

			if (IPlayer.GetSpecialty() >= 3 && IPlayer.GetLevel() >= 40 && SkillID == 12 && !PointerCheck)
				return 1;

			if (IPlayer.GetSpecialty() >= 3 && IPlayer.GetLevel() >= 30 && SkillID == 25 && !PointerCheck)
				return 1;

			if (IPlayer.GetSpecialty() >= 3 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 31 && SkillID == 8)
				{
					int CheckGrade = IPlayer.GetLevel() - 29;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 3)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 31 && SkillID == 9)
				{
					int CheckGrade = IPlayer.GetLevel() - 29;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 3)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 36 && SkillID == 10)
				{
					int CheckGrade = IPlayer.GetLevel() - 34;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 41 && SkillID == 12)
				{
					int CheckGrade = IPlayer.GetLevel() - 39;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 31 && SkillID == 25)
				{
					int CheckGrade = IPlayer.GetLevel() - 29;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetLevel() >= 20 && SkillID == 4 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 18;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 10)
					{
						return 0;
					} else if (Skill.GetGrade() + 1 <= CheckGrade)
					{
						IPlayer.IncreaseCritRate(1);
						IPlayer.IncreaseCritDamage(1);
						return 1;
					} else {
						return 0;
					}
				}
			}

			if (IPlayer.GetLevel() >= 25 && SkillID == 5 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 23;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 10)
					{
						return 0;
					} else if (Skill.GetGrade() + 1 <= CheckGrade)
					{
						IPlayer.IncreaseCritRate(1);
						IPlayer.IncreaseCritDamage(1);
						return 1;
					} else {
						return 0;
					}
				}
			}

			if (IPlayer.GetLevel() >= 20 && SkillID == 7 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 18;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 5)
						return 0;
					else if (Skill.GetGrade() + 1 <= CheckGrade)
						return 1;
					else
						return 0;
				}
			}

			if ((IPlayer.GetSpecialty() == 7 || IPlayer.GetSpecialty() == 23) && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 54 && SkillID == 14)
				{
					int CheckGrade = IPlayer.GetLevel() - 52;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 3)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 55 && SkillID == 15)
				{
					int CheckGrade = IPlayer.GetLevel() - 53;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 3)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 57 && SkillID == 16)
				{
					int CheckGrade = IPlayer.GetLevel() - 55;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 3)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 59 && SkillID == 17)
				{
					int CheckGrade = IPlayer.GetLevel() - 57;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 61 && SkillID == 18)
				{
					int CheckGrade = IPlayer.GetLevel() - 59;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 2)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 57 && SkillID == 21)
				{
					int CheckGrade = IPlayer.GetLevel() - 55;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if ((IPlayer.GetSpecialty() == 7 || IPlayer.GetSpecialty() == 23) && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 53 && SkillID == 14)
					return 1;

				if (IPlayer.GetLevel() >= 54 && SkillID == 15)
					return 1;

				if (IPlayer.GetLevel() >= 56 && SkillID == 16)
					return 1;

				if (IPlayer.GetLevel() >= 58 && SkillID == 17)
					return 1;

				if (IPlayer.GetLevel() >= 60 && SkillID == 18)
					return 1;

				if (IPlayer.GetLevel() >= 56 && SkillID == 21)
					return 1;
			}

			if ((IPlayer.GetSpecialty() == 11 || IPlayer.GetSpecialty() == 43) && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 51 && SkillID == 13)
				{
					int CheckGrade = IPlayer.GetLevel() - 49;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 2)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 51 && SkillID == 19)
				{
					int CheckGrade = IPlayer.GetLevel() - 49;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 3)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 54 && SkillID == 20)
				{
					int CheckGrade = IPlayer.GetLevel() - 52;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 55 && SkillID == 22)
				{
					int CheckGrade = IPlayer.GetLevel() - 53;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 64 && SkillID == 63)
				{
					int CheckGrade = IPlayer.GetLevel() - 62;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if ((IPlayer.GetSpecialty() == 11 || IPlayer.GetSpecialty() == 43)&& !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 50 && SkillID == 13)
					return 1;

				if (IPlayer.GetLevel() >= 50 && SkillID == 19)
					return 1;

				if (IPlayer.GetLevel() >= 53 && SkillID == 20)
					return 1;

				if (IPlayer.GetLevel() >= 54 && SkillID == 22)
					return 1;

				if (IPlayer.GetLevel() >= 60 && SkillID == 23)
					return 1;

				if (IPlayer.GetLevel() >= 63 && SkillID == 63)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 43 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 26)
					return 1;

				if (IPlayer.GetLevel() >= 70 && SkillID == 28)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 32)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 43 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 71 && SkillID == 28)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 76 && SkillID == 32)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetSpecialty() == 23 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 27)
					return 1;

				if (IPlayer.GetLevel() >= 70 && SkillID == 33)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 36)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 23 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 71 && SkillID == 33)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 76 && SkillID == 36)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetLevel() >= 25 && SkillID == 24 && !PointerCheck)
				return 1;

			if (IPlayer.GetLevel() >= 15 && SkillID == 6 && !PointerCheck)
				return 1;

			if (IPlayer.GetLevel() >= 1 && SkillID == 2 && !PointerCheck)
			{
				IPlayer.AddMinAttack(1);
				IPlayer.AddMaxAttack(1);
				return 1;
			}

			if (IPlayer.GetLevel() >= 5 && SkillID == 3 && !PointerCheck)
			{
				IPlayer.AddOTP(2);
				return 1;
			}

			if (IPlayer.GetLevel() >= 6 && SkillID == 3 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel()- 4;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 10)
					{
						return 0;
					} else if (Skill.GetGrade() + 1 <= CheckGrade)
					{
						IPlayer.AddOTP(2);
						return 1;
					} else {
						return 0;
					}
				}
			}

			if (IPlayer.GetLevel() >= 2 && SkillID == 2 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel();
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 10)
					{
						return 0;
					} else if (Skill.GetGrade() + 1 <= CheckGrade)
					{
						IPlayer.AddMinAttack(1);
						IPlayer.AddMaxAttack(1);
						return 1;
					} else {
						return 0;
					}
				}
			}

			if (IPlayer.GetLevel() >= 16 && SkillID == 6 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 14;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 3)
						return 0;
					else if (Skill.GetGrade() + 1 <= CheckGrade)
						return 1;
					else
						return 0;
				}
			}
		}

		if (IPlayer.GetClass() == 2)
		{
			if (IPlayer.GetSpecialty() == 23 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 47)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 51)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 43 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 49)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 50)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 23 && IPlayer.GetLevel() >= 70 && SkillID == 47 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 69;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 6)
						return 0;
					else if (Skill.GetGrade() + 1 <= CheckGrade)
						return 1;
					else
						return 0;
				}
			}

			if (IPlayer.GetSpecialty() == 23 && IPlayer.GetLevel() >= 70 && SkillID == 51 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 74;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 5)
						return 0;
					else if (Skill.GetGrade() + 1 <= CheckGrade)
						return 1;
					else
						return 0;
				}
			}

			if (IPlayer.GetSpecialty() == 43 && IPlayer.GetLevel() >= 70 && SkillID == 49 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 69;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 6)
						return 0;
					else if (Skill.GetGrade() + 1 <= CheckGrade)
						return 1;
					else
						return 0;
				}
			}

			if (IPlayer.GetSpecialty() == 43 && IPlayer.GetLevel() >= 70 && SkillID == 50 && PointerCheck)
			{
				int CheckGrade = IPlayer.GetLevel() - 74;
				int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

				if (SkillPointer)
				{
					ISkill Skill((void*)SkillPointer);

					if (Skill.GetGrade() >= 5)
						return 0;
					else if (Skill.GetGrade() + 1 <= CheckGrade)
						return 1;
					else
						return 0;
				}
			}
		}

		if (IPlayer.GetClass() == 1)
		{
			if (IPlayer.GetSpecialty() == 43 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 69)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 72)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 23 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 65)
					return 1;

				if (IPlayer.GetLevel() >= 70 && SkillID == 66)
					return 1;

				if (IPlayer.GetLevel() >= 70 && SkillID == 67)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 73)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 74)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 75)
					return 1;
			}

			if ((IPlayer.GetSpecialty() == 11 || IPlayer.GetSpecialty() == 43) && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 50 && SkillID == 76)
					return 1;
			}

			if ((IPlayer.GetSpecialty() == 11 || IPlayer.GetSpecialty() == 43) && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 55 && SkillID == 76)
				{
					int CheckGrade = IPlayer.GetLevel() - 45;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (CheckGrade > Skill.GetGrade())
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetSpecialty() == 43 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 69)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 75 && SkillID == 72)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetSpecialty() == 23 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 65)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 70 && SkillID == 66)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 70 && SkillID == 67)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 75 && SkillID == 73)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 75 && SkillID == 74)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 75 && SkillID == 75)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}
		}

		if (IPlayer.GetClass() == 0)
		{
			if ((IPlayer.GetSpecialty() == 11 || IPlayer.GetSpecialty() == 43) && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 56 && SkillID == 41)
					return 1;
			}

			if ((IPlayer.GetSpecialty() == 11 || IPlayer.GetSpecialty() == 43) && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 56 && SkillID == 41)
				{
					int CheckGrade = IPlayer.GetLevel() - 55;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetSpecialty() == 23 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 38)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 43)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 23 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 38)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 75 && SkillID == 43)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}

			if (IPlayer.GetSpecialty() == 43 && !PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 40)
					return 1;

				if (IPlayer.GetLevel() >= 75 && SkillID == 42)
					return 1;
			}

			if (IPlayer.GetSpecialty() == 43 && PointerCheck)
			{
				if (IPlayer.GetLevel() >= 70 && SkillID == 40)
				{
					int CheckGrade = IPlayer.GetLevel() - 69;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 6)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}

				if (IPlayer.GetLevel() >= 75 && SkillID == 42)
				{
					int CheckGrade = IPlayer.GetLevel() - 74;
					int SkillPointer = *((DWORD*)((int)Player + 624) + SkillID + 2);

					if (SkillPointer)
					{
						ISkill Skill((void*)SkillPointer);

						if (Skill.GetGrade() >= 5)
							return 0;
						else if (Skill.GetGrade() + 1 <= CheckGrade)
							return 1;
						else
							return 0;
					}
				}
			}
		}
	}

	return 0;
}