package tree_sitter_treesittergml_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-treesittergml"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_treesittergml.Language())
	if language == nil {
		t.Errorf("Error loading Treesittergml grammar")
	}
}
