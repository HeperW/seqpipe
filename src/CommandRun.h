#ifndef COMMAND_RUN_H__
#define COMMAND_RUN_H__

#include <list>
#include <string>
#include <vector>
#include "Launcher.h"

class CommandRun
{
public:
	int Run(const std::list<std::string>& args);
private:
	bool ParseArgs(const std::list<std::string>& args);
	void PrintUsage();
	bool WriteToHistoryLog(const std::string& uniqueId);
	bool CreateLastSymbolicLink(const std::string& uniqueId);
	bool PrepareToRun(const std::string& logDir, const std::string& uniqueId);
	bool RecordSysInfo(const std::string& filename);
private:
	int verbose_ = 0;
	int maxJobNumber_ = 0;
	bool forceRun_ = false;
	bool keepTemp_ = false;

	Launcher launcher_;
};

#endif