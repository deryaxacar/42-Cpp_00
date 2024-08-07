### C++ Module 00 Ex02 - Hayalinizdeki İş

---

### Proje Açıklaması

Bu proje, GlobalBanksters United'daki ilk gününüzde karşılaştığınız bir görevi simüle eder. Bir dosya kaybolmuştur ve bu dosyanın yeniden oluşturulması gerekmektedir. Şanslısınız ki, Account.hpp ve Tests.cpp dosyaları hala mevcuttur. Bu bilgilerle, eksik olan Account.cpp dosyasını yeniden oluşturmanız gerekecek.

---

### Gerekli Dosyalar

Projeyi tamamlamak için aşağıdaki dosyaları sağlamanız gerekmektedir:

- `Makefile`
- `Account.cpp`
- `Account.hpp`
- `tests.cpp`

---

### Proje Adımları

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

### Yazmamız Gereken Fonksiyonlar

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

### Kullanım

Projeyi derlemek ve çalıştırmak için aşağıdaki adımları izleyin:

1. Tüm dosyaları aynı dizine yerleştirin.
2. Terminali açın ve proje dizinine gidin.
3. Aşağıdaki komutu çalıştırarak projeyi derleyin:
   ```sh
   make

4. Programınızı çalıştırın
   ```sh
   ./tests

---
