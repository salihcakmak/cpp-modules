## Keywords

- Namespace
- Class
- Member function
- Stdio streams
- Initialization list
- Static
- Const

C++, Bjarne Stroustrup tarafından C programlama dilinin bir uzantısı olarak veya "C with Classes" tarafından oluşturulan
genel amaçlı bir programlama dilidir. Bu modüllerin amacı, sizi Nesne Yönelimli Programlama ile tanıştırmaktır. Bu, C++
yolculuğunuzun başlangıç noktası olacaktır. OOP öğrenmek için birçok dil önerilir. Eski dostunuz C'den türetildiği için
C++'ı seçmeye karar verdik. C++ karmaşık bir dil olduğundan ve işleri basit tutmak istediğimiz için kodunuz C++98
standardına uygun olacaktır.

Modern C++'ın birçok açıdan çok farklı olduğunun farkındayız. Dolayısıyla, yetkin bir C++
geliştiricisi olmak istiyorsanız, 42 common core tamamlandıktan sonra daha ileri gitmek size kalmış.

Adım adım yeni konseptler keşfedeceksiniz. Alıştırmaların karmaşıklığı giderek artacaktır.

## Genel Kurallar

**Derleme | Compiling**

- Kodu derlerken c++ derleyicisini kullanın ve flagleri kullanmayı unutmayın. -Wall -Werror -Wextra
- Derleme komut'u ifadenize -std=c++98 flag'ini eklediğinizde projenizin hala derlenebilir olduğundan emin olun.

**Biçimlendirme ve Adlandırma Kuralları | Formatting and naming conventions**

- Alıştırma dizinleri şu şekilde adlandırılacaktır: ex00, ex01, ... , exn
- Files, classes, functions, member functions ve attributes tanımlamalarını yönergelerde istenilen gibi tanımlayınız.
- Class adlarını UpperCamelCase formatında yazın.
- Class tanımlamalarının bulunduğu dosya isimleri mutlaka sınıf adı ile aynı olmalıdır. Örneğin: ClassName.hpp / ClassName.h, ClassName.cpp veya ClassName.tpp.
- Mesela header dosyanızın içerisinde araba model anlamına gelen CarModels sınıfının tanımı varsa, header dosyanızın adı CarModels.hpp olacaktır.
- Aksi belirtilmedikçe, her çıktı mesajı yeni bir satır karakteri ile sonlandırılmalı ve standart çıktıya gösterilmelidir.
- Hoşçakal Norminette! C++ modüllerinde hiçbir kodlama stili uygulanmaz. İstediğin tarzı seçebilirsin. Ancak, akran değerlendiricilerinizin anlayamayacağı bir kodun, not veremeyecekleri bir kod olduğunu unutmayın.
- Temiz ve okunabilir bir kod yazmak için elinizden gelenin en iyisini yapın.

**İzinler ve Yasaklar | Allowed / Forbidden**

Artık C ile kod yazmıyorsunuz. C++ zamanı! Öyleyse:

- Standart kitaplıktan neredeyse her şeyi kullanmanıza izin verilir. Bu nedenle, zaten bildiklerinize bağlı kalmak yerine, alışık olduğunuz C işlevlerinin mümkün olduğunca C++-ish sürümlerini kullanmak akıllıca olacaktır.
- Ancak, başka bir harici kitaplık kullanamazsınız. Bu, C++ 11 (ve türetilmiş formlar) ve Boost kitaplıklarının yasak olduğu anlamına gelir.
- Şu işlevler de yasaktır: *printf(), *alloc() ve free(). Bunları kullanırsanız, notunuz 0 olur ve bu kadar.
- Aksi açıkça belirtilmediği sürece namespace <ns_name> ve friend keywordlerini kullanmanın yasak olduğunu Unutmayın!! Aksi takdirde notunuz -42 olacaktır.
- 
