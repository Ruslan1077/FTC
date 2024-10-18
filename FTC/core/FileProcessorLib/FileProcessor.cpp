#include "pch.h"
#include "FileReaderFactory.h"
#include "FileWriterFactory.h"
#include "TextConverterFactory.h"
#include "FileProcessor.h"

namespace core
{

    file_processor::file_processor()
        : reader_factory_(new reader_factory())
        , writer_factory_(new writer_factory())
        , converter_factory_(new converter_factory())
    {
    }

    void file_processor::process_file(
        file_processor_context ctx)
    {
        try
        {
            auto reader = reader_factory_->create_reader(ctx.convert_from);
            auto writer = writer_factory_->create_writer(ctx.convert_to);
            auto converter = converter_factory_->create_converter(ctx.convert_to);

            // TODO: add logic
        }
        catch (const std::exception& ex)
        {
            ex;
            // TODO: provide error status?
        }
    }

} // namespace core
