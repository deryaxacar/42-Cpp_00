### Cpp_00/Ex01 PhoneBook Program

---

Bu kod, bir telefon defteri uygulamasının ana programını temsil eder. Programın işleyişi ve kodun sunduğu özellikler hakkında aşağıda detaylı bir açıklama bulabilirsiniz:

---

### Özellikler
  - **Başlangıç Mesajı:**
    - Program, kullanıcılara hoş geldiniz mesajı gösterir ve sadece `ADD`, `SEARCH` ve `EXIT` komutlarını kabul ettiğini belirtir.
    - Mesaj, kullanıcıya arayüz ve komutlar hakkında bilgi verir.
  - **Komutları İşleme:**
    - Program, kullanıcıdan bir komut girmesini ister. Kullanıcıdan alınan komut `std::getline` ile işlenir, bu da kullanıcının boşlukları ve özel karakterleri içeren komutları doğru şekilde girmesine olanak tanır.

---

### Komutlar

Programın çalışması sırasında aşağıdaki komutları kullanabilirsiniz:

- **ADD**: Telefon defterine yeni bir kişi ekler.
  - Bu komut, kullanıcıdan kişi bilgilerini (isim, telefon numarası gibi) girmesini ister ve bu bilgileri telefon defterine ekler.
- **SEARCH**: Telefon defterinde kayıtlı kişileri arar ve gösterir.
  - Bu komut, kullanıcıya defterdeki kayıtları arama ve görüntüleme imkanı sağlar.
- **EXIT**: Programı sonlandırır.
  - Bu komut programı kapatır ve ekrana "* This Program Exited *" mesajını yazar.

**Not:** Detaylar için sayfanın alt kısmını kontrol etmeyi unutmayın.

---

### Derleme ve Çalıştırma

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

### Kodların detaylı açıklamaları

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
