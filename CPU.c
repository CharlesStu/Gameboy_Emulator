#include <stdint.h>

typedef struct Register{
    struct
    {
        union
        {
            uint8_t A;
            uint8_t F;    
        };
        int16_t AF;
    };
    struct
    {
        union
        {
            uint8_t B;
            uint8_t C;    
        };
        int16_t BC;
    };
        struct
    {
        union
        {
            uint8_t D;
            uint8_t E;    
        };
        int16_t DE;
    };
        struct
    {
        union
        {
            uint8_t H;
            uint8_t L;    
        };
        int16_t HL;
    };
    uint16_t SP;
    uint16_t PC;

}Register;