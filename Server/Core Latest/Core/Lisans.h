int LisansCheck()
{
	WORD wVersionRequested; WSADATA wsaData; char name[255]; PHOSTENT hostinfo; wVersionRequested = MAKEWORD(1,1); char *ip;

	if (WSAStartup( wVersionRequested, &wsaData ) == 0)
	{
		if(gethostname(name, sizeof(name)) == 0)
		{
			if((hostinfo = gethostbyname(name)) != NULL)
			{
				ip = inet_ntoa(*(struct in_addr *)hostinfo->h_addr_list[0]);  
				int a = ip[0];
				int b = ip[1];
				int c = ip[2];
				int d = ip[3];
				int e = ip[4];
				int f = ip[5];
				int g = ip[6];
				int h = ip[7];
				int i = ip[8];
				int j = ip[9];
				int k = ip[10];
				int l = ip[11];
				int m = ip[12];
				int n = ip[13];
				int o = ip[14];

				if (a == 49 && b == 57 && c == 50)
					return 1;

			}
		}
	}

	return 0;
}

char *DownloadBytes(const char *szUrl)
{
    HINTERNET hOpen = NULL, hFile = NULL;
    DWORD dataSize = 0, dwBytesRead = 0;
    hOpen = InternetOpenA("MyAgent", NULL, NULL, NULL, NULL);
	char buffer[2000];
    
	if (!hOpen)
		return NULL;
 
    hFile = InternetOpenUrlA(hOpen, szUrl, NULL, NULL, INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE, NULL);
    
	if (!hFile)
	{
        InternetCloseHandle(hOpen);
        return NULL;
    }
    
	if (InternetReadFile(hFile, buffer, _countof(buffer), &dwBytesRead))
        buffer[dwBytesRead] = '\0';
    else
        return NULL;
 
    InternetCloseHandle(hFile);
    InternetCloseHandle(hOpen);
    char *ret = buffer;
    return ret;
}

int RemoteLisansCheck()
{
	const char *test = MyReLisansCheckStr.c_str();
    char *abcd = DownloadBytes(test);
    
	return 0;
}