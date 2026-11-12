#include <cpkg.h>

int build() {
  cpkg.package_type = App;
  cpkg.platform = x86_64;

  cpkg.name = "Hello";
  cpkg.description = "A rust app that returns Hello, $USER";
  cpkg.maintainers = (char *[]){"Noticxs", NULL};
  cpkg.version = "0.1.0";
  cpkg.authors = (char *[]){"Noticxs", NULL};

  cpkg.get_url =
      "https://github.com/Noticxs/Hello/raw/main/packaging/hello.tar.gz";
  cpkg.sha256hash =
      "e727c90de56d126e555859857e42839fd0c1155147b8abc642572dc8f277a3b3";
  cpkg.install_source = binary;

  return 0;
}
