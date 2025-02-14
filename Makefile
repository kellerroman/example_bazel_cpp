all: test build run

run:
	bazel run //src:main

build:
	bazel build //...

test:
	bazel test --verbose_failures --test_output=errors --test_summary=terse //...

clean:
	git clean -dxf

commands:
	bazel run :refresh_compile_commands

tidy:
	bazel build //... --config clang-tidy

