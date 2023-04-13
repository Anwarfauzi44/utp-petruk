# Daftar harga minuman
harga_minuman = {
    'Coca Cola': 5000,
    'Pepsi': 4500,
    'Fanta': 4000,
    'Sprite': 3500,
    'Air Mineral': 2000
}

# Saldo awal pengguna
saldo = input()

# Fungsi untuk menampilkan daftar harga
def tampilkan_daftar_harga():
    print('Daftar Harga Minuman:')
    for minuman, harga in harga_minuman.items():
        print(f'{minuman}: Rp {harga}')

# Fungsi untuk memproses pembelian
def proses_pembelian(pilihan):
    global saldo
    if pilihan in harga_minuman:
        if saldo >= harga_minuman[pilihan]:
            saldo -= harga_minuman[pilihan]
            print(f'Anda membeli {pilihan}.')
            print(f'Sisa saldo: Rp {saldo}')
        else:
            print('Maaf, saldo Anda tidak cukup.')
    else:
        print('Pilihan tidak valid.')

# Loop utama
while True:
    print('=== Mesin Penjual Otomatis ===')
    print(f'Saldo Anda: Rp {saldo}')
    tampilkan_daftar_harga()
    print('Pilih minuman (ketik "keluar" untuk keluar):')
    pilihan = input()
    if pilihan.lower() == 'keluar':
        break
    proses_pembelian(pilihan)

    # Meminta pengguna untuk memasukkan uang
    if saldo == 0:
        print('Masukkan uang Anda (ketik "selesai" untuk selesai):')
    else:
        print('Masukkan uang tambahan (ketik "selesai" untuk selesai):')
    while True:
        uang = input()
        if uang.lower() == 'selesai':
            break
        elif uang.isdigit():
            saldo += int(uang)
        else:
            print('Masukkan jumlah uang yang valid (angka) atau ketik "selesai" untuk selesai.')

print('Terima kasih telah menggunakan Mesin Penjual Otomatis!') 