cpm-optional
============

CPM external a c++11 optional implementation. The source implementation is
here: https://github.com/hostilefork/CopyMoveConstrainedOptional.git .

This repository may be converted into a CPM module instead of a
one-version-only external in the future.

Use
---

To use this module once you perform `CPM_AddModule` add the following include
directive:

```c++
#include <cmc-optional/optional.hpp>
```

See http://en.cppreference.com/w/cpp/utility/optional for a great reference
for the upcoming optional class in the standard.

Compilers Tested
----------------

Clang 3.3
---------

GCC 4.8
-------

