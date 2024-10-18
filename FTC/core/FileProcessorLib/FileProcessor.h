#pragma once
#include <memory>
#include <string>
#include "CoreStructs.h" //TODO: find a way to fix it

namespace core
{
    class reader_factory;
    class writer_factory;
    class converter_factory;

    struct file_processor_context
    {
        file_types convert_from;
        file_types convert_to;
        std::string original_file_path;
        std::string result_file_path;
    };

    class file_processor
    {
    public:
        file_processor();

        void process_file(file_processor_context ctx);

    private:
        std::unique_ptr<reader_factory> reader_factory_;
        std::unique_ptr<writer_factory> writer_factory_;
        std::unique_ptr<converter_factory> converter_factory_;
    };

} // namespace core