int main(
    __attribute__((private(0))) int a,
    __attribute__((private(1))) int b)
{
    struct test {   
        int a;
        int b;
    };
    struct test c = {0, 1};
    c.a = a;
    c.b = b;
    return c.a + c.b;
}