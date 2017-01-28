# User Guide of SeqPipe

## Introduction

SeqPipe is a command line-based pipeline framework for bioinformatics research. It has predefined many common useful pipelines for high throughput sequencing data analysis and is very easy for both bioinformaticians and biology researchers to launch different tools.

More importantly, SeqPipe could record as many related information as possible to ensure the analysis procedure is reproducible, which is essential in scientific research.

## Features

There are some features of SeqPipe, for which you may like to use it as your handy framework in your daily data analysis.

- **GNU bash-like syntax** - Defining a pipeline in SeqPipe is almost the same as writing a function in GNU bash. Most your pre-existed bash scripts may be very easy to migrate to SeqPipe framework, from which you will benefit a lot, such as logs and re-use, while keep the scripts as clear as possible.
- **Logging automatically** - When running pipeline with SeqPipe, it will automatically record command lines, parameters, program versions, running time and other log files. All of those are useful and also important for you to track every step of your analysis, which could help you to make research results be reproducible.
- **Run in parallel easily** - It is very easy to define which steps in a pipeline should be run in parallel, without adding any complexity to the scripts.
- **File dependency checking** - SeqPipe could check input/output file dependency for each step, therefore those already finished steps could be skipped automatically, especially when you restart a pipeline after it was somehow aborted.
- **Predefined pipelines** - SeqPipe predefined many common pipelines for high throughput sequencing data analysis, including read mapping and variant calling. They are easy-to-use for experienced bioinformaticians and also useful for newbie to start learning the workflows.

## Installation

There are different ways to install SeqPipe. Choose any one you like:

1. Install from GitHub source:

        $ git clone https://github.com/yanlinlin82/seqpipe -b cpp-v0.5 --single-branch
        $ make -C seqpipe/
        $ sudo cp -av seqpipe/seqpipe /usr/bin/   # or other directory set in PATH
        $ rm -rf seqpipe/                         # (optionally) clean up

2. Install by pre-compiled executable files:

        <<TODO>>: To be completed.


## Quick Start

1. The easiest way to use `seqpipe` is run shell command with prefix `seqpipe run`:

        $ seqpipe run echo 'Hello, world!'

    Log files can be checked in `.seqpipe` directory:

        $ ls -lR .seqpipe/

2. Pipeline can also be written into file as:

        $ cat <<EOF> foo.pipe
        hello() {
            echo "Hello, world!"
            sleep 1
            echo "Goodbye!"
        }
        EOF

    Then run:

        $ seqpipe -m foo.pipe hello

    Check log files:

        $ ls -lR .seqpipe/last/

## Usage Examples

1. Use `seqpipe` to record commands:

        $ seq 1 3 | awk '{print "echo Hello - "$1}' | seqpipe run

## Reference

    <<TODO>>: To be completed.

## FAQ

    <<TODO>>: To be completed.