<div align="center">
  <h1>C++ Module 00</h1> <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" alt="C++ Logo" width="65"></br></br>

</div>
<p align="center" >
    Bu repoda bulunan egzersizler, hem teknik becerilerinizi geliştirmek hem de yazılım geliştirme süreçlerine dair deneyim kazanmak için harika fırsatlar sunar. C++’ın ilk temellerini atmamızda yardımcı olur ve C'den C++’ya geçiş aşamasında önemli bir destek sağlar.
  </p>


### İçindekiler 📚
- [Ex00 - Megafon](#ex00---megafon)
- [Ex01 - Benim Harika Telefon Rehberim](#ex01---benim-harika-telefon-rehberim)
- [Ex02 - Hayalinizdeki İş (Bonus)](#ex02---hayalinizdeki-i̇ş-bonus)

---

<a name="ex00---megafon"></a>

### Ex00 - Megafon 📢

Program aşağıdaki işlemleri gerçekleştirir:
1. **Eğer hiçbir argüman sağlanmamışsa** (yani sadece program adı verilmişse):
   - Ekrana "* LOUD AND UNBEARABLE FEEDBACK NOISE *" mesajını yazdırır.

2. **Bir veya daha fazla argüman sağlanmışsa**:
   - Her bir argümanı büyük harfe çevirir ve ekrana yazdırır.

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

## Kullanım ⚙️

Derlemek için:
  ```sh
  Make
   ```

Derlenmiş programı çalıştırmak için:

- **Argüman olmadan**:
  ```sh
  ./converter
  * LOUD AND UNBEARABLE FEEDBACK NOISE *

- **Argümanlı**:
  ```sh
  ./converter merhaba dünya
  MERHABA DÜNYA

---

<a name="ex01---benim-harika-telefon-rehberim"></a>

### Ex01 - Benim Harika Telefon Rehberim 📞

---

Bu kod, bir telefon defteri uygulamasının ana programını temsil eder. Programın işleyişi ve kodun sunduğu özellikler hakkında aşağıda detaylı bir açıklama bulabilirsiniz:

---

### Özellikler 📌
  - **Başlangıç Mesajı:**
    - Program, kullanıcılara hoş geldiniz mesajı gösterir ve sadece `ADD`, `SEARCH` ve `EXIT` komutlarını kabul ettiğini belirtir.
    - Mesaj, kullanıcıya arayüz ve komutlar hakkında bilgi verir.
  - **Komutları İşleme:**
    - Program, kullanıcıdan bir komut girmesini ister. Kullanıcıdan alınan komut `std::getline` ile işlenir, bu da kullanıcının boşlukları ve özel karakterleri içeren komutları doğru şekilde girmesine olanak tanır.

---

### Komutlar ⚙

Programın çalışması sırasında aşağıdaki komutları kullanabilirsiniz:

- **ADD**: Telefon defterine yeni bir kişi ekler.
  - Bu komut, kullanıcıdan kişi bilgilerini (isim, telefon numarası gibi) girmesini ister ve bu bilgileri telefon defterine ekler.
- **SEARCH**: Telefon defterinde kayıtlı kişileri arar ve gösterir.
  - Bu komut, kullanıcıya defterdeki kayıtları arama ve görüntüleme imkanı sağlar.
- **EXIT**: Programı sonlandırır.
  - Bu komut programı kapatır ve ekrana "* This Program Exited *" mesajını yazar.

**Not:** Detaylar için sayfanın alt kısmını kontrol etmeyi unutmayın.

---

### Derleme ve Çalıştırma 🛠️

Programı derlemek ve çalıştırmak için şu adımları izleyebilirsiniz:

1. **Derleme**: Programı derlemek için aşağıdaki komutu kullanabilirsiniz:
    ```bash
    Make
    ```

2. **Çalıştırma**: Derlenmiş programı çalıştırmak için:
    ```bash
    ./phonebook
    ```

---

**Komut Örnekleri:**

- `> Please enter a command: ADD`
  - Kişi bilgilerini ekler ve ekrana "* Informations has added Phonebook *" mesajını yazar.

- `> Please enter a command: SEARCH`
  - Kişileri arar ve ilgili bilgileri ekrana getirir.

- `> Please enter a command: EXIT`
  - Programı sonlandırır ve ekrana "* This Program Exited *" mesajını yazar.

- `> Please enter a command: INVALID`
  - Geçersiz komut mesajı olarak "* Invalid Command *" yazar.

---


Bu adımları takip ederek programınızı derleyebilir ve çalıştırabilirsiniz. Program, komutları doğru bir şekilde girdiğinizde telefon defterini yönetmenize yardımcı olacaktır. Detaylar için alt kısımı inceleyiniz.

---

### Kodların detaylı açıklamaları 🔍

<details>
<summary>ADD</summary>

---
  
```c
void PhoneBook::ADD()
{
    std::string data; // Kullanıcıdan alınan bilgileri saklamak için bir string değişkeni
    if (counter == 8) // Telefon defterinin kapasitesine ulaşıldığında
        counter = 0;  // Counter'ı sıfırla, böylece eski kayıtlar üzerine yazılır

    // Kullanıcıdan ilk adı girmesini iste
    std::cout << "> Please Enter Your First Name: ";
    std::getline(std::cin, data); // Kullanıcının girdiği ilk adı al
    cntact[counter].setFirstName(data); // Alınan adı ilgili kontak nesnesinin first name alanına ata

    // Kullanıcıdan soyadı girmesini iste
    std::cout << "> Please Enter Your Last Name: ";
    std::getline(std::cin, data); // Kullanıcının girdiği soyadı al
    cntact[counter].setLastName(data); // Alınan soyadı ilgili kontak nesnesinin last name alanına ata

    // Kullanıcıdan takma adını girmesini iste
    std::cout << "> Please Enter Your NickName: ";
    std::getline(std::cin, data); // Kullanıcının girdiği takma adı al
    cntact[counter].setNickName(data); // Alınan takma adı ilgili kontak nesnesinin nickname alanına ata

    // Kullanıcıdan telefon numarasını girmesini iste
    std::cout << "> Please Enter Your Number: ";
    std::getline(std::cin, data); // Kullanıcının girdiği telefon numarasını al
    cntact[counter].setNumber(data); // Alınan telefon numarasını ilgili kontak nesnesinin number alanına ata

    // Kullanıcıdan en karanlık sırrını girmesini iste
    std::cout << "> Please Enter Your Secret: ";
    std::getline(std::cin, data); // Kullanıcının girdiği sırrı al
    cntact[counter].setDarkestSecret(data); // Alınan sırrı ilgili kontak nesnesinin darkest secret alanına ata

    counter++; // Counter'ı bir artır, bir sonraki ekleme için hazırlık yap
    if (y != 8) // Eğer y değeri 8 değilse
        y++; // y'yi artır (muhtemelen toplam kayıt sayısını takip eden bir değişken)

    // std::cin'yi temizle ve buffer'ı boşalt, böylece bir sonraki giriş için hazır olur
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
```
---

**Açıklamalar:**
- counter ve y Değişkenleri: Bu kod parçasında counter ve y değişkenleri, telefon defterindeki geçerli kayıtların izlenmesini ve döngüsel olarak eski kayıtların üzerine yazılmasını sağlar. counter, telefon defterindeki mevcut kayıt konumunu belirtir ve 8 kayıt kapasitesine ulaşıldığında sıfırlanır. y değişkeni, toplam kayıt sayısını izliyor olabilir ve 8'e kadar sayıyı artırır.
- std::getline Kullanımı: std::getline fonksiyonu, kullanıcıdan tam bir satırı (boşlukları da içerecek şekilde) alır ve data değişkenine atar.
- std::cin.clear() ve std::cin.ignore(): Bu çağrılar, olası giriş hatalarını temizler ve akıştaki fazla karakterleri yok eder, böylece bir sonraki giriş için temiz bir durum sağlar.

---

</details>

<details>
<summary>SEARCH</summary>

---

```c

void PhoneBook::SEARCH()
{
    // Telefon defteri boşsa bilgilendirme mesajı göster
    if (counter == 0)
        std::cout << "* Phonebook is empty *" << std::endl;
    else
    {
        // Telefon defteri doluysa başlık ve tablo başlıklarını yazdır
        std::cout << "_____________________________________________" << std::endl;
        std::cout << "----------------* PHONEBOOK *----------------" << std::endl;
        std::cout << "_____________________________________________" << std::endl;
        std::cout << "|     index|first name| last name|  nickname|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }
    
    // Mevcut kayıtları ekrana yazdır
    for (int i = 0; i < y; i++)
    {
        // Kayıtların indeksini yazdır
        std::cout << "|" << "         " << i << "|" ;

        // İlk adı yazdır, 10 karakterden uzun ise kısalt
        if (cntact[i].getFirstName().size() > 10)
            std::cout << cntact[i].getFirstName().substr(0, 9) << ".|";
        else
        {
            size_t size = cntact[i].getFirstName().size(); // Adın uzunluğunu al
            for (int j = 0; j < 10 - size; j++) // Adı 10 karakter uzunluğuna getirmek için boşluk ekle
                std::cout << " ";
            std::cout << cntact[i].getFirstName(); // Adı yazdır
            std::cout << "|";
        }

        // Soyadı yazdır, 10 karakterden uzun ise kısalt
        if (cntact[i].getLastName().size() > 10)
            std::cout << cntact[i].getLastName().substr(0, 9) << ".|";
        else
        {
            size_t size = cntact[i].getLastName().size(); // Soyadın uzunluğunu al
            for (int j = 0; j < 10 - size; j++) // Soyadı 10 karakter uzunluğuna getirmek için boşluk ekle
                std::cout << " ";
            std::cout << cntact[i].getLastName(); // Soyadı yazdır
            std::cout << "|";
        }

        // Takma adı yazdır, 10 karakterden uzun ise kısalt
        if (cntact[i].getNickName().size() > 10)
            std::cout << cntact[i].getNickName().substr(0, 9) << ".|" << std::endl;
        else
        {
            size_t size = cntact[i].getNickName().size(); // Takma adın uzunluğunu al
            for (int j = 0; j < 10 - size; j++) // Takma adı 10 karakter uzunluğuna getirmek için boşluk ekle
                std::cout << " ";
            std::cout << cntact[i].getNickName(); // Takma adı yazdır
            std::cout << "|" << std::endl;
        }
    }

    // Kullanıcıdan bir indeks seçmesini iste
    int index;
    int flag = 0; // Geçerli bir indeks seçildiğini belirlemek için bayrak
    while (!flag && (y != 0))
    {
        std::cout << "> Select index: ";
        std::cin >> index; // Kullanıcının indeks girmesini bekle

        // Girdi hatası kontrolü
        if (std::cin.fail())
        {
            std::cout << "* Invalid input *" << std::endl;
            std::cin.clear(); // Hata bayrağını temizle
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Geriye kalan girişleri temizle
        }
        // Girilen indeks geçerli bir aralıkta mı kontrol et
        else if ((index >= 0 && index <= 7) && !(index > y - 1))
        {
            // Seçilen indeksin bilgilerini yazdır
            std::cout << "First Name: " << cntact[index].getFirstName() << std::endl;
            std::cout << "Last Name: " << cntact[index].getLastName() << std::endl;
            std::cout << "NickName: " << cntact[index].getNickName() << std::endl;
            std::cout << "Number: " << cntact[index].getNumber() << std::endl;
            std::cout << "Darkest Secret: " << cntact[index].getDarkestSecret() << std::endl;
            flag = 1; // Geçerli bir indeks seçildi
        }
        else
            std::cout << "* Wrong index *" << std::endl; // Geçersiz bir indeks girildi
    }
    std::cin.clear(); // Giriş akışını temizle
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Geriye kalan girişleri temizle
}
```
---

**Açıklamalar:**
- Boş Telefon Defteri Kontrolü: Telefon defterinin boş olup olmadığını kontrol eder. Eğer boşsa, kullanıcıya uygun bir mesaj gösterir.
- **Kayıtları Yazdırma:** Mevcut kayıtları tablo şeklinde formatlayarak ekrana yazdırır. Ad, soyad ve takma adları 10 karakter uzunluğuna getirir; 10 karakterden uzun olanları kısaltır ve nokta ile belirtir.
- **Kullanıcıdan İndeks Seçimi:** Kullanıcıdan bir indeks girmesini ister. Geçerli bir indeks girilene kadar döngü devam eder. Girilen indeksin geçerli olup olmadığını kontrol eder ve hatalı girişlerde kullanıcıyı bilgilendirir.
- **Giriş Hataları ve Temizlik:** Giriş hataları için std::cin.fail() kontrolü yapılır, hata durumunda akış temizlenir ve fazlalık karakterler yok edilir.

---

</details>

<details>
<summary>EXIT</summary>

---
  - komut olarak EXIT girildiğinde kodun main kısmında exıt için mesaj yazdırıp return(0) atılıyor direkt.

</details>

---

<a name="ex02---hayalinizdeki-i̇ş-bonus"></a>

### Ex02 - Hayalinizdeki İş (Bonus) 💰⭐

---

### Proje Açıklaması 📝

Bu proje, GlobalBanksters United'daki ilk gününüzde karşılaştığınız bir görevi simüle eder. Bir dosya kaybolmuştur ve bu dosyanın yeniden oluşturulması gerekmektedir. Şanslısınız ki, Account.hpp ve Tests.cpp dosyaları hala mevcuttur. Bu bilgilerle, eksik olan Account.cpp dosyasını yeniden oluşturmanız gerekecek.

---

### Gerekli Dosyalar 📁

Projeyi tamamlamak için aşağıdaki dosyaları sağlamanız gerekmektedir:

- `Makefile`
- `Account.cpp`
- `Account.hpp`
- `tests.cpp`

---

### Proje Adımları 📈

1. **Account.hpp ve tests.cpp Dosyalarını İndirin:**
   - Bu dosyalar intranetteki proje sayfasında mevcuttur.

2. **Account.cpp Dosyasını Yeniden Oluşturun:**
   - Günlük dosyasını ve Account.hpp dosyasını kullanarak Account.cpp dosyasını yeniden yazın.
   - Account sınıfının nasıl geliştirilmesi gerektiğini anlamak için günlük dosyasını dikkatlice inceleyin.

3. **Kodunuzu Derleyin ve Test Edin:**
   - tests.cpp dosyasını derleyerek kodunuzu test edin.
   - Kodunuzun, günlük dosyasındaki çıktıyla (zaman damgaları hariç) eşleştiğinden emin olun.

4. **Makefile Oluşturun:**
   - Projeyi derlemek için bir Makefile oluşturun.

---

### Yazmamız Gereken Fonksiyonlar 📋

Aşağıda, Account.cpp dosyasında yazmanız gereken fonksiyonların listesini ve açıklamalarını bulabilirsiniz:

- **`Account::Account(int initial_deposit)`**: 
  - **Açıklama**: Hesap oluşturucu. Yeni bir hesap nesnesi yaratır ve başlangıç yatırımı alır.
  - **Parametreler**: `initial_deposit` - Hesaba ilk yatırılacak miktar.
  - **Detaylar**: 
    - `_accountIndex` değeri toplam hesap sayısından alınır.
    - `_amount`, `initial_deposit` değeri ile başlatılır.
    - `_nbDeposits` ve `_nbWithdrawals` sıfır olarak başlatılır.
    - Toplam miktar, `initial_deposit` kadar artırılır.
    - Zaman damgası görüntülenir ve hesap oluşturulduğu mesajı ekrana yazdırılır.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Account sınıfının yapıcı fonksiyonu, hesap oluşturulduğunda çağrılır.
    // initial_deposit: Hesabın başlangıç bakiyesi.
    Account::Account(int initial_deposit)
    {
        // Hesabın index numarasını al ve _accountIndex değişkenine ata.
        _accountIndex = getNbAccounts();
        
        // Hesabın başlangıç bakiyesini _amount değişkenine ata.
        _amount = initial_deposit;
        
        // Hesaba yapılmış toplam depozit sayısını sıfırla.
        _nbDeposits = 0;
        
        // Hesaptan yapılmış toplam para çekme sayısını sıfırla.
        _nbWithdrawals = 0;
        
        // Zaman damgasını ekrana yazdır.
        _displayTimestamp();
        
        // Hesap bilgilerini ekrana yazdır (index numarası ve bakiye).
        std::cout << "index:" << _accountIndex << ";" << std::flush;
        std::cout << "amount:" << _amount << ";created" << std::flush << std::endl;
        
        // Toplam bakiyeye bu hesabın başlangıç bakiyesini ekle.
        _totalAmount += initial_deposit;
    }
    ```
    </details>

---

- **`Account::~Account(void)`**: 
  - **Açıklama**: Hesap yıkıcı. Hesap nesnesi yok edilirken çağrılır.
  - **Detaylar**: 
    - Zaman damgası görüntülenir ve hesap kapatıldığı mesajı ekrana yazdırılır.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Account sınıfının yıkıcı fonksiyonu, hesap yok edildiğinde çağrılır.
    Account::~Account(void)
    {
    // Zaman damgasını ekrana yazdır.
    _displayTimestamp();
    
    // Hesap bilgilerini ekrana yazdır (index numarası ve bakiye).
    std::cout << "index:" << _accountIndex << ";" << std::flush;
    std::cout << "amount:" << _amount << ";closed" << std::flush << std::endl;
    }
    ```
    </details>

---

**Açıklama:** 
Getter fonksiyonları, bir sınıfın özel (private) üyelerine erişimi sağlamak için kullanılan fonksiyonlardır. Projemizdeki getter fonksiyonları:

---

- **`int Account::getNbAccounts(void)`**: 
  - **Açıklama**: Toplam hesap sayısını döndürür.
  - **Dönüş Değeri**: Toplam hesap sayısı (`_nbAccounts`).
  - **Detaylar**: 
    - `_nbAccounts` değeri artırılır ve geri döndürülür.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Hesap sayısını döndüren fonksiyon. Her çağrıldığında toplam hesap sayısını artırır.
    int	Account::getNbAccounts(void)
    {
    // Toplam hesap sayısını döndür ve ardından artır.
	    return (_nbAccounts++);
    }
    ```
    </details>

---

- **`int Account::getTotalAmount(void)`**: 
  - **Açıklama**: Tüm hesapların toplam mevduatını döndürür.
  - **Dönüş Değeri**: Toplam mevduat miktarı (`_totalAmount`).
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Toplam hesap bakiyesini döndüren fonksiyon.
    int	Account::getTotalAmount(void)
    {
      // Toplam bakiyeyi döndür.
	    return (_totalAmount);
    }
    ```
    </details>

--- 

- **`int Account::getNbDeposits(void)`**: 
  - **Açıklama**: Toplam yapılan depozit sayısını döndürür.
  - **Dönüş Değeri**: Toplam depozit sayısı (`_totalNbDeposits`).
  - **Detaylar**: 
    - `_totalNbDeposits` değeri artırılır ve geri döndürülür.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Toplam depozit sayısını döndüren fonksiyon. Her çağrıldığında toplam depozit sayısını artırır.
    int	Account::getNbDeposits(void)
    {
       // Toplam depozit sayısını döndür ve ardından artır.
	     return (_totalNbDeposits++);
    }
    ```
    </details>

--- 

- **`int Account::getNbWithdrawals(void)`**: 
  - **Açıklama**: Toplam yapılan para çekme sayısını döndürür.
  - **Dönüş Değeri**: Toplam para çekme sayısı (`_totalNbWithdrawals`).
  - **Detaylar**: 
    - `_totalNbWithdrawals` değeri artırılır ve geri döndürülür.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Toplam para çekme sayısını döndüren fonksiyon. Her çağrıldığında toplam para çekme sayısını artırır.
    int	Account::getNbWithdrawals(void)
    {
      // Toplam para çekme sayısını döndür ve ardından artır.
	    return (_totalNbWithdrawals++);
    }
    ```
    </details>

--- 
  
- **`void Account::displayAccountsInfos(void)`**: 
  - **Açıklama**: Tüm hesapların genel bilgilerini ekrana yazdırır.
  - **Detaylar**: 
    - Zaman damgası görüntülenir.
    - Hesap sayısı, toplam miktar, toplam depozit ve toplam para çekme sayıları yeşil renkte ekrana yazdırılır.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Tüm hesap bilgilerini ekrana yazdıran fonksiyon.
    void	Account::displayAccountsInfos(void)
    {
      // Zaman damgasını ekrana yazdır.
	    _displayTimestamp();
	
      // Hesap sayısını ekrana yazdır (renkli formatta).
	    std::cout << GREEN << "accounts:" << _nbAccounts << ";" << std::flush;
	
      // Toplam bakiyeyi ekrana yazdır.
	    std::cout << "total:" << _totalAmount << ";" << std::flush;
	
      // Toplam depozit sayısını ekrana yazdır.
	    std::cout << "deposits:" << _totalNbDeposits << ";" << std::flush;
	
      // Toplam para çekme sayısını ekrana yazdır (renkli formatta).
	    std::cout << "withdrawals:" << _totalNbWithdrawals << END << std::flush << std::endl;
    }
    ```
    </details>

---
  
- **`void Account::_displayTimestamp(void)`**: 
  - **Açıklama**: Mevcut zaman damgasını ekrana yazdırır.
  - **Detaylar**: 
    - Mevcut tarih ve saat `[YYYYMMDD_HHMMSS]` formatında görüntülenir.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Zaman damgasını ekrana yazdıran özel fonksiyon.
    void	Account::_displayTimestamp(void)
    {
	    std::time_t	time; // Zaman bilgisini tutacak değişken.

	    // Geçerli zamanı al.
	    time = std::time(NULL);
	
	    // Zaman damgasını formatlayarak ekrana yazdır.
	    std::cout << std::setfill('0') << "[" // 0 ile doldurma
		  << std::setw(2) << 1900 + std::localtime(&time)->tm_year // Yılı yazdır (1900 eklenerek)
		  << std::setw(2) << 1 + std::localtime(&time)->tm_mon // Ayı yazdır (1 eklenerek)
		  << std::setw(2) << std::localtime(&time)->tm_mday << "_" // Günü yazdır
		  << std::setw(2) << std::localtime(&time)->tm_hour // Saati yazdır
		  << std::setw(2) << std::localtime(&time)->tm_min // Dakikayı yazdır
		  << std::setw(2) << std::localtime(&time)->tm_sec // Saniyeyi yazdır
		  << "] " << std::flush; // Zaman damgasını bitir ve yazdır.
    }
    ```
    </details>

---

- **`void Account::makeDeposit(int deposit)`**: 
  - **Açıklama**: Hesaba para yatırır.
  - **Parametreler**: `deposit` - Hesaba yatırılacak miktar.
  - **Detaylar**: 
    - Zaman damgası görüntülenir.
    - Eski miktar, yatırılan miktar ve yeni miktar sarı renkte ekrana yazdırılır.
    - Toplam miktar ve hesap miktarı yatırılan miktar kadar artırılır.
    - Depozit sayısı artırılır ve ekrana yazdırılır.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Hesaba para yatırma işlemini gerçekleştiren fonksiyon.
    // deposit: Yatırılacak miktar.
    void	Account::makeDeposit(int deposit)
    {
	    // Zaman damgasını ekrana yazdır.
	    _displayTimestamp();
	
	    // Toplam depozit sayısını artır ve geri döndür.
	    getNbDeposits();
	
	    // Hesap bilgilerini ekrana yazdır (renkli formatta).
	    std::cout << YELLOW << "index:" << _accountIndex << ";" << std::flush; // Hesap indexi
	    std::cout << "p_amount:" << _amount << ";" << std::flush; // Önceki bakiye
	    std::cout << "deposit:" << deposit << ";" << std::flush; // Yatırılan miktar
	    std::cout << "amount:" << _amount + deposit << ";" << std::flush; // Yeni bakiye
	    std::cout << "nb_deposit:" << ++_nbDeposits << END << std::flush << std::endl; // Toplam depozit sayısını yazdır
	
	    // Toplam bakiyeye yatırılan miktarı ekle.
	    _totalAmount += deposit;
	    // Hesabın mevcut bakiyesine yatırılan miktarı ekle.
	    _amount += deposit;
    }
    ```
    </details>

---

- **`bool Account::makeWithdrawal(int withdrawal)`**: 
  - **Açıklama**: Hesaptan para çeker.
  - **Parametreler**: `withdrawal` - Hesaptan çekilecek miktar.
  - **Dönüş Değeri**: Para çekme işlemi başarılıysa `true`, aksi takdirde `false`.
  - **Detaylar**: 
    - Zaman damgası görüntülenir.
    - Eğer çekilecek miktar mevcut bakiye kadar veya daha azsa:
      - Eski miktar, çekilen miktar ve yeni miktar mavi renkte ekrana yazdırılır.
      - Toplam miktar ve hesap miktarı çekilen miktar kadar azaltılır.
      - Para çekme sayısı artırılır ve ekrana yazdırılır.
      - İşlem başarılı olur ve `true` döner.
    - Aksi takdirde, işlem reddedilir ve kırmızı renkte "refused" mesajı ekrana yazdırılır ve `false` döner.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Hesaptan para çekme işlemini gerçekleştiren fonksiyon.
    // withdrawal: Çekilecek miktar.
    bool	Account::makeWithdrawal(int withdrawal)
    {
	    // Zaman damgasını ekrana yazdır.
	    _displayTimestamp();
	
	    // Hesap bilgilerini ekrana yazdır (renkli formatta).
	    std::cout << BLUE << "index:" << _accountIndex << ";" << std::flush; // Hesap indexi
    	std::cout << "p_amount:" << _amount << ";" << std::flush; // Önceki bakiye
    
    	// Eğer çekilecek miktar mevcut bakiyeden azsa ve pozitif bir değer ise işlemi gerçekleştir.
    	if (withdrawal <= _amount && withdrawal > 0)
    	{
    		// Toplam para çekme sayısını artır ve geri döndür.
    		getNbWithdrawals();
    		
    		// Çekim işlemi bilgilerini ekrana yazdır.
    		std::cout << "withdrawal:" << withdrawal << ";" << std::flush; // Çekilen miktar
    		std::cout << "amount:" << _amount - withdrawal << ";" << std::flush; // Yeni bakiye
    		std::cout << "nb_withdrawals:" << ++_nbWithdrawals << END << std::flush << std::endl; // Toplam çekim sayısını yazdır
    		
    		// Toplam bakiyeden çekilen miktarı çıkar.
    		_totalAmount -= withdrawal;
    		// Hesabın mevcut bakiyesinden çekilen miktarı çıkar.
    		_amount -= withdrawal;
    		
    		return (true); // İşlem başarılı
    	}
	
    	// Eğer yeterli bakiye yoksa "reddedildi" mesajını yazdır.
    	std::cout << RED << "refused" << END << std::flush << std::endl;
    	return (false); // İşlem başarısız
    }
    ```
    </details>

---

- **`int Account::checkAmount(void) const`**: 
  - **Açıklama**: Hesap bakiyesini kontrol eder.
  - **Dönüş Değeri**: Hesap bakiyesi.
  - **Detaylar**: 
    - "checkAmount" mesajı ekrana yazdırılır..
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Hesap bakiyesini kontrol eden fonksiyon (şu anlık olarak sadece bir mesaj yazdırır).
    // Bu fonksiyon sabit bir yöntemdir, yani hesap durumunu değiştiremez.
    int		Account::checkAmount(void) const
    {
    	// "checkAmount" mesajını ekrana yazdır.
    	std::cout << "checkAmount" << std::flush << std::endl;
    	
    	// Fonksiyon şu an 0 döndürmektedir. Bu, bakiyenin kontrolü için kullanılacak bir değer değildir.
    	return (0);
    }
    ```
    </details>

---

- **`void Account::displayStatus(void) const`**: 
  - **Açıklama**: Hesap durumunu ekrana yazdırır.
  - **Detaylar**: 
    - Zaman damgası görüntülenir.
    - Hesap indeksi, miktar, depozit ve para çekme sayıları mavi renkte ekrana yazdırılır.
  - <details>
    <summary>Kodu görüntüle</summary>

    ```cpp
    // Hesap durumunu ekrana yazdıran fonksiyon.
    // Bu fonksiyon sabit bir yöntemdir, yani hesap durumunu değiştiremez.
    void	Account::displayStatus(void) const
    {
    	// Zaman damgasını ekrana yazdır.
    	_displayTimestamp();
    	
    	// Hesap bilgilerini (index, bakiye, toplam depozit ve toplam para çekme) ekrana yazdır.
    	std::cout << CYAN << "index:" << _accountIndex << ";" << std::flush; // Hesap indexi
    	std::cout << "amount:" << _amount << ";" << std::flush; // Mevcut bakiye
    	std::cout << "deposits:" << _nbDeposits << ";" << std::flush; // Toplam depozit sayısı
    	std::cout << "withdrawals:" << _nbWithdrawals << END << std::flush << std::endl; // Toplam para çekme sayısı
    }
    ```
    </details>

---

### Kullanım 🛠️

Projeyi derlemek ve çalıştırmak için aşağıdaki adımları izleyin:

1. Tüm dosyaları aynı dizine yerleştirin.
2. Terminali açın ve proje dizinine gidin.
3. Aşağıdaki komutu çalıştırarak projeyi derleyin:
   ```sh
   make

4. Programınızı çalıştırın
   ```sh
   ./tests

Not : En son çıktıyla intradaki log dosyasını indirip karşılaştırmanız gerekli herhangi bir sorun yoksa projeniz geçerlidir.

---


