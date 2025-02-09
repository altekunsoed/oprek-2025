class PersegiPanjang:

    def __init__(self, panjang, lebar):
        self.panjang = panjang
        self.lebar = lebar

    def cetak(self):
        pass

    def hitung_luas(self):
        pass


print("=== Program menghitung luas persegi panjang ===")

panjang = int(input("Masukkan panjang: "))
lebar = int(input("Masukkan lebar: "))

persegiPanjang = PersegiPanjang(panjang, lebar)
persegiPanjang.cetak()
print(f"Luas: {persegiPanjang.hitung_luas()}")
