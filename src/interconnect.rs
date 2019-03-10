const RAM_SIZE: usize = 4 * 1024 * 1024;

pub struct Interconnect {
    ram: Vec<u16>
}

impl Default for Interconnect {
    fn default() -> Interconnect {
        Interconnect {
            ram: vec![0; RAM_SIZE]
        }
    }
}
