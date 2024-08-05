### Cpp_00/ex00

---

Program aşağıdaki işlemleri gerçekleştirir:
1. **Eğer hiçbir argüman sağlanmamışsa** (yani sadece program adı verilmişse):
   - Ekrana "* LOUD AND UNBEARABLE FEEDBACK NOISE *" mesajını yazdırır.

2. **Bir veya daha fazla argüman sağlanmışsa**:
   - Her bir argümanı büyük harfe çevirir ve ekrana yazdırır.

---
**Kodun yorum satırlı hali**

---

```c

#include <iostream> // Standart giriş/çıkış işlemleri için gerekli kütüphane
#include <string>   // String (karakter dizisi) işlemleri için gerekli kütüphane

// Programın giriş noktası
int main(int ac, char **av)
{
    // 'i' ve 'j' isimli iki değişken tanımlanıyor
    int i = 1; // 'av' dizisinin ilk elemanı programın adı olduğu için, giriş argümanlarından ilkini işaret eder
    int j = 0; // Her bir argümanın içindeki karakterleri döngü ile işaret eder

    // Eğer program sadece adı ile çalıştırılmışsa (yani hiçbir argüman verilmemişse)
    if(ac == 1)
        // Ekrana "* LOUD AND UNBEARABLE FEEDBACK NOISE *" mesajını yazdırır
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        // Argümanlar üzerinde döngü başlatılır (ilk argüman programın adı olduğu için i = 1'den başlar)
        while(av[i])
        {
            // Her bir argüman için içindeki karakterler üzerinde döngü başlatılır
            j = 0;
            while(av[i][j])
            {
                // Karakteri büyük harfe dönüştürüp ekrana yazdırır
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            // Bir sonraki argümana geçmek için 'i' değişkenini artırır
            i++;
        }
        // Argümanların yazdırılmasının ardından bir yeni satır karakteri ekler
        std::cout << "\n";
    }
}
```

---

**Tür Dönüşümü (Type Casting) Açıklaması**

Kodumuzdaki şu satır:

```c
  std::cout << (char)toupper(av[i][j]);
```

Burada iki tür dönüşümü var:

  - toupper(av[i][j]):
      - av[i][j] karakterini büyük harfe dönüştürür ve int türünde bir değer döner. Bu dönüşüm işlemi, karakterin ASCII kodunu temsil eden bir tam sayı sağlar.


  - (char)toupper(av[i][j]):
    - toupper fonksiyonunun döndürdüğü int değerini char türüne dönüştürür. Bu dönüşüm, ASCII kodunu tekrar bir karaktere çevirir, böylece ekrana doğru karakter olarak yazdırılabilir.

---
