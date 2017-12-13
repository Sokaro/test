#include<iostream>
#include<Windows.h>
#include<mutex>
using namespace std;
//struct st
//{
//	int x;
//	HANDLE mt;
//}st2;
//DWORD f(LPVOID lparam)
//{
//	st *st1 = (st*)lparam;
//	
//	for (int i = 0; i < st1->x; i++)
//	{
//		WaitForSingleObject(st1->mt, 50);
//		cout << "f " << i << endl;
//		ReleaseMutex(st1->mt);
//		Sleep(50);
//	}
//	
//	return 0;
//}
//
//DWORD f2(LPVOID lparam)
//{
//	st *st1 = (st*)lparam;
//	
//	for (int i = 0; i < st1->x; i++)
//	{
//		WaitForSingleObject(st1->mt, 50);
//		cout << "f2 " << i << endl;
//		ReleaseMutex(st1->mt);
//		Sleep(50);
//	}
//	
//	return 0;;
//}
//int main()
//{
//	st *st1=&st2;
//	st1->x = 4;
//	st1->mt=CreateMutex(NULL,false,NULL);
//	HANDLE t1 = CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)f,(void*)st1,0,0);
//	HANDLE t2 = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)f2, (void*)st1, 0, 0);
//	WaitForSingleObject(t2,INFINITE);
//	cout << GetCommandLine()<<endl;
//	system("pause");
//}

int main()
{
	int x = 6;
	int *nargs=&x;
	PWSTR *ppargv = CommandLineToArgvW(GetCommandLineW(), nargs);
	if (*ppargv[1] == 'x'){
		cout << "ppargv[1]=x" << endl;
	}
	HeapFree(GetProcessHeap, 0, ppargv);
	system("pause");
}