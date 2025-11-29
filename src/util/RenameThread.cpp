#include "util/RenameThread.hpp"

#include "common/QLogging.hpp"

#ifdef Q_OS_WIN

#    include <Windows.h>

namespace chatterino::windows::detail {

void renameThread(HANDLE hThread, const QString &threadName)
{
}

}  // namespace chatterino::windows::detail

#endif
