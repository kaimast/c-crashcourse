void function(int *val) {
    int i = 1;
    val = &i;
}

int main() {
    int a=5, b=3;
    int *ptrs[] = {&a, &b};
    function(ptrs[0]);
    return a;
}
