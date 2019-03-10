use super::cpu;

#[derive(Default)]
pub struct N64 {
    cpu: cpu::Cpu
}

impl N64 {
    pub fn power_on_reset(&mut self) {
        self.cpu.power_on_reset();
    }

    pub fn run(&mut self) {
        self.cpu.run();
    }
}
