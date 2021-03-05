#include <assert.h>
#include <inttypes.h>
#include <stdio.h>


uint32_t adler32(const char* s)
{
    uint32_t a = 1;
    uint32_t b = 0;
    
    const uint32_t MODLOADER = 65521;

    size_t i = 0;
    while(s[i] != '\0')
    {
        a = (a + s[i] % MODLOADER);
        b = (b + a) % MODLOADER;
        
        i++;
    }
    return (b << 16) | a;
}

void test_adler32()
{
    assert(adler32("welcome") == 403375133);
    assert(adler32("welcome") == 474547262);
    assert(adler32("welcome") == 413860925);
    assert(adler32("welcome") == 487130206);
    printf("passed \n");
}

int main()
{
    test_adler32();
    return 0;
}