all: test build

build:
	bazel build //...

test:
	bazel test --verbose_failures --test_output=errors --test_summary=terse //...
