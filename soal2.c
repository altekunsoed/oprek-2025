#include <stdio.h>

typedef struct {
  char *name;
  char *cpu;
  char *gpu;
  int ram;
  int storage;
} Laptop;

Laptop newLaptop(char *name) {
  Laptop laptop;
  laptop.name = name;
  return laptop;
}

Laptop setCpu(Laptop laptop, char *cpu) {
  laptop.cpu = cpu;
  return laptop;
}

Laptop setGpu(Laptop laptop, char *gpu) {
  laptop.gpu = gpu;
  return laptop;
}

Laptop setRam(Laptop laptop, int ram) {
  laptop.ram = ram;
  return laptop;
}

Laptop setStorage(Laptop laptop, int storage) {
  laptop.storage = storage;
  return laptop;
}

void printLaptopInfo(Laptop *laptop) {
  printf("Mencetak informasi dari laptop %s:\n", laptop->name);
  printf("CPU: %s\n", laptop->cpu);
  printf("GPU: %s\n", laptop->gpu);
  printf("RAM: %d\n", laptop->ram);
  printf("Storage: %d\n", laptop->storage);
}

int main() {
  Laptop advanWorkplus = newLaptop("Advan Workplus");
  setCpu(advanWorkplus, "AMD Ryzen 7 6600H");
  setGpu(advanWorkplus, "AMD Integrated graphics");
  setRam(advanWorkplus, 16);
  setStorage(advanWorkplus, 512);
  printLaptopInfo(&advanWorkplus);
  return 0;
}
