#[derive(Debug)]
enum Ep {
    D,
    DxxDxx,
    RFU
}

impl Default for Ep {
    fn default() -> Ep {
        Ep::D
    }
}

#[derive(Debug)]
enum Be {
    LittleEndian,
    BigEndian
}

impl Default for Be {
    fn default() -> Be {
        Be::BigEndian
    }
}

#[derive(Debug, Default)]
pub struct RegConfig {
    ep: Ep,
    be: Be
}

impl RegConfig {
    pub fn power_on_reset(&mut self) {
        self.ep = Ep::D;
        self.be = Be::BigEndian;
    }
}
