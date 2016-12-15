#include <iostream>
//#include <fmt/format.h>
#include <spdlog/spdlog.h>


int main()
{
	fmt::print("Hello world\n");
	fmt::print("Mam {} lat", 20);

	auto logger = spdlog::stdout_logger_mt("RedDragon", true);

	logger->set_level(spdlog::level::debug);
	logger->info("Dzisiaj techday");
	logger->debug("Mowimy o c++");
	logger->error("opoznienie");

	std::getchar();
	return 0;
}