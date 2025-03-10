#pragma once

class Options
{
public:
	Options();
	~Options();

	bool	Read(int argc, char ** argv);

	void	PrintUsage(void);

	bool	m_launchCS;

	bool	m_setPriority;
	DWORD	m_priority;

	bool	m_crcOnly;
	bool	m_optionsOnly;
	bool	m_waitForClose;
	bool	m_verbose;

	UInt32	m_fpsLimit;

	std::string	m_altEXE;
	std::string	m_altDLL;

private:
	bool	Verify(void);
};

extern Options g_options;
