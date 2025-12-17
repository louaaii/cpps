#include "Serializer.hpp"

int main(int ac, char **av){

    (void)av;
    if (ac != 1){
        std::cerr << "Wrong number of args" << std::endl;
        return 1;
    }

    Data data;
    data.n = 42;
    data.f = 3.14f;
    data.c = 'A';

    uintptr_t raw = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << "Original Data:" << std::endl;
    std::cout << "n: " << data.n << ", f: " << data.f << ", c: " << data.c << std::endl;

    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "n: " << deserializedData->n << ", f: " << deserializedData->f << ", c: " << deserializedData->c << std::endl;

    return 0;
}