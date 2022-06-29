#include <imgui.h>
#include <iostream>

int main() {

	ImGui::Text("hello Wrold 111");

	float fu = 0;
	char buf[] = "Werked1";

	if (ImGui::Button("OK")) {

		std::cout << "worked" << std::endl;
	}

	ImGui::InputText("string", buf, 256);
	ImGui::SliderFloat("float", &fu, 0.0f, 0.1f);

	return 0;
	system("pause");

}