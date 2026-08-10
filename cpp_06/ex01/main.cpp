#include "Serializer.hpp"

int main()
{
	Data raw;

	raw.id = 69;
	raw.label = "Noice";

	uintptr_t	cereal = Serializer::serialize(&raw);
	Data* decrypted = Serializer::deserialize(cereal);

	std::cout << cereal << std::endl;
	std::cout << decrypted << std::endl;
}