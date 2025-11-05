#include "includes.h"

void lg_log(const char* format, ...) {
    /*va_list args;
	va_start(args, format);
	int size = _vscprintf(format, args) + 1;
	va_end(args);

	char* buffer = (char*)malloc(size);

	va_start(args, format);
	vsnprintf(buffer, size, format, args);
	va_end(args);

	time_t timestamp;
	time(&timestamp);

	struct tm* time_info = malloc(sizeof(tm));
	localtime_s(time_info, &timestamp);
	
	char time[100];
	strftime(time, sizeof(time), "%Y-%m-%d %H:%M:%S", time_info);

    fprintf(stdout, "LOG      (%s):\t%s\n", time, buffer);*/
}