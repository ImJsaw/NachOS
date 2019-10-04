#include "syscall.h"
main()
	{
		int	n;
		for (n=0;n<10;n++){
			Example(n);
			Sleep(n*n*n*10);
		}

	}
