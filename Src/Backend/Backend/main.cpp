// Backend.cpp : Defines the entry point for the console application.
//

#include "AvailabilityServer.h"
#include "FileProductReader.h"

using namespace Backend;

int main()
{
	FileProductReader^ fileProductReader = gcnew FileProductReader();

	AvailabilityServer server(fileProductReader);
	server.Start();
    return 0;
}