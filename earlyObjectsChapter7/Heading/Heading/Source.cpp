#include "Heading.h"

int main() {

	Heading defaultHeader;
	defaultHeader.printManager(defaultHeader, Heading::PrintChoices::OneLiner);
	defaultHeader.printManager(defaultHeader, Heading::PrintChoices::Boxed);

	Heading header("Industry Check", "Payroll Report");
	header.printManager(header, Heading::PrintChoices::OneLiner);
	header.printManager(header, Heading::PrintChoices::Boxed);

	return 0;
}