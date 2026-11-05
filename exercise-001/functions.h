void printVar(int *pointer, char name){
       fmt::println("{} hat den Wert {} und die Adresse {}", name, *pointer, fmt::ptr(pointer));
}