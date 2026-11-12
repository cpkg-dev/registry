#include <cpkg.h>

int build() {
  cpkg.package_type = App;
  cpkg.platform = x86_64;

  cpkg.name = "Hello";
  cpkg.description = "A rust app that returns Hello, $USER";
  cpkg.maintainers = (char *[]){"Noticxs", NULL};
  cpkg.version = "0.1.0";
  cpkg.authors = (char *[]){"Noticxs", NULL};

  cpkg.get_url = "https://raw.githubusercontent.com/Noticxs/Hello/main/"
                 "packaging/hello.tar.gz";
  cpkg.sha256hash =
      "888fffee73e0f7f20bcc43f52ad62faa30524c0d4cecc47565afd4f78f8be0f2";
  cpkg.install_source = binary;

  return 0;
}
