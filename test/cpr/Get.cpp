
/// Headers from standard libraries
#include <iostream>
#include <cassert>

/// Headers from current project

/// Headers from other projects
#include <cpr/cpr.h>

int main()
{
	auto r = cpr::Get(cpr::Url{"https://api.github.com/repos/whoshuu/cpr/contributors"});
	
	std::cout << "Status code : " << r.status_code << " : " << std::endl;
	std::cout << "Content type : " << r.header["content-type"] 
	          << " : " << std::endl;
	std::cout << "JSON text string : " << r.text << " : " << std::endl;
	std::cout << "URL : " << r.url << " : " << std::endl;
	
	return 0;
}
