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


Bu adımları takip ederek programınızı derleyebilir ve çalıştırabilirsiniz. Program, komutları doğru bir şekilde girdiğinizde telefon defterini yönetmenize yardımcı olacaktır.


---

