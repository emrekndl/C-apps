// Import the WASM module
import initModule from './trie.js';

async function testTrie() {
    try {
        // Initialize the WASM module
        const Module = await initModule();
        
        // Create function wrappers
        const initTrieFromBin = Module.cwrap('init_trie_from_bin', null, []);
        const trieContains = Module.cwrap('trie_contains', 'boolean', ['string']);
        
        // Initialize trie from binary file
        console.log('Initializing trie from binary file...');
        initTrieFromBin();
        
        // Test some words
        const testWords = ['dünya', 'world', 'elmas', 'nonexistent'];
        
        for (const word of testWords) {
            const exists = trieContains(word);
            console.log(`Word "${word}" ${exists ? 'exists' : 'does not exist'} in the trie`);
        }
        
    } catch (error) {
        console.error('Error:', error);
    }
}

testTrie();
