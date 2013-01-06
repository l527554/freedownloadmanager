/*
  Free Download Manager Copyright (c) 2003-2011 FreeDownloadManager.ORG
*/

#pragma once

class vmsCrashReporter
{
public:
	vmsCrashReporter(void);
	virtual ~vmsCrashReporter(void);
	bool SubmitDumpToServer(LPCTSTR ptszServerAddr, LPCTSTR ptszScriptPath, LPCTSTR ptszDumpFileName, LPCSTR pszXml);

protected:
	static void GenerateXml (LPCTSTR ptszAppName, LPCTSTR ptszVersion, LPCTSTR ptszDescription, LPCSTR pszAdditionalXmlData, std::string& strResult);
	virtual void onInitializePostRequest (vmsPostRequest& request) {}
};
