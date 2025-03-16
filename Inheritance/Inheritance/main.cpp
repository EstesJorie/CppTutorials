#include <iostream>
#include <vector>
#include <memory>

#include "TextBox.h"
#include "CheckBox.h"
#include "FileIO.h"

using namespace std;

void showWidget(Widget widget)
{
	widget.draw();
}

int main()
{
	vector<unique_ptr<Widget>> widgets;
	widgets.push_back(make_unique<TextBox>());
	widgets.push_back(make_unique<CheckBox>());
	for (const auto& widget : widgets)
		widget->draw();

	FileIO file{"name"};
	file.FileReader::fileName();

}