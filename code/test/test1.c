#include "syscall.h"
main()
	{
		int	n;
		for (n=0;n<10;n++){
			PrintInt(n);
			Sleep(n*n*n*10);
		}

	}
