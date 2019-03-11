use super::reg_config;

#[derive(Debug, Default)]
pub struct Cp0 {
    reg_config: reg_config::RegConfig
}

impl Cp0 {
    pub fn power_on_reset(&mut self) {
        self.reg_config.power_on_reset();
    }

    pub fn write_reg(&mut self, index: u32, data: u64) {
        match index {
            12 => { self.write_status_reg(data); }
            _ => panic!("Unregognized Cp0 reg: {:#?}, {:#?}", index, data)
        }
    }

    fn write_status_reg(&mut self, data: u64) {
        panic!("Status reg write: {:#b}", data);
    }
}
