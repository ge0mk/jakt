#include "utility.h"
#include "main.h"
#include "jakt__platform__unknown_compiler.h"
#include "build.h"
#include "jakt__platform__unknown_process.h"
#include "ide.h"
#include "project.h"
#include "repl.h"
#include "jakt__libc__io.h"
#include "formatter.h"
#include "codegen.h"
#include "typechecker.h"
#include "interpreter.h"
#include "types.h"
#include "parser.h"
#include "lexer.h"
#include "compiler.h"
#include "error.h"
#include "utility.h"
#include "jakt__file_iterator.h"
#include "jakt__platform__unknown_fs.h"
#include "jakt__path.h"
#include "jakt__platform__unknown_path.h"
#include "jakt__platform.h"
#include "jakt__arguments.h"
#include "jakt__prelude__prelude.h"
#include "jakt__prelude__string.h"
#include "jakt__prelude__iteration.h"
namespace Jakt {
namespace utility {

/* specialisation 0 of function null: ["FILE"] */
template<> FILE* null<FILE>();

/* specialisation 1 of function null: ["char"] */
template<> char* null<char>();

/* specialisation 0 of function allocate: ["char"] */
template<> char* allocate<char>(size_t const count);
template<>
FILE* null<FILE>() {
{
{
return nullptr;
}

abort();
}
}
template<>
char* null<char>() {
{
{
return nullptr;
}

abort();
}
}
template<>
char* allocate<char>(size_t const count) {
{
Function<void(char*&)> const alloc_impl = [count](char*& ptr) -> void {
{
{
ptr = static_cast<RemoveReference<decltype(ptr)>>(calloc(count, sizeof(*ptr)));
}

}
}
;
char* ptr = utility::null<char>();
alloc_impl(((ptr)));
return (ptr);
}
}
}
} // namespace Jakt