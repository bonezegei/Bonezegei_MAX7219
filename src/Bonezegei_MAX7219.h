
class Bonezegei_MAX7219{
public:
  Bonezegei_MAX7219();
  Bonezegei_MAX7219(uint8_t cs);
  Bonezegei_MAX7219(uint8_t dat, uint8_t clk, uint8_t cs);

  char begin();

  uint8_t _cs;
  uint8_t _dat; //using shift
  uint8_t _clk; //using shift
}
