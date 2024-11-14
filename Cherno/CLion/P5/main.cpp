#include <iostream>

class Log {
public:
    enum Level
    {
        LogLevelError, LogLevelWarning, LogLevelInfo
    };

//    const int LogLevelError = 0;
//    const int LogLevelWarning = 1;
//    const int LogLevelInfo = 2;

private:
    Level m_LogLevel = LogLevelInfo;
public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    }

    void Error(const char *message) {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Warn(const char *message) {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Info(const char *message) {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main() {
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    return 0;
}

